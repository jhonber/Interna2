const fs = require('fs')
const child_process = require('child_process')
const path = require('path')
const config = require('./config.json')

var template = fs.readFileSync('./template.tex').toString()

var content = []

for (var letter in config['problems']) {
    var problem = config['problems'][letter]

    problem['time'] = problem['time'] || '2'
    problem['memory'] = problem['memory'] || '256'

    var header = `
        \\begin{center}
            {\\LARGE Problem ${letter}}\\\\
            {\\Large ${problem.name}}\\\\
            {Time limit: ${problem.time} second}\\\\
            {Memory limit: ${problem.memory} megabytes}
        \\end{center}`

    content.push(header)

    var statement = fs.readFileSync(path.join('../',problem.path))
    content.push(statement.toString())
}

template = template.replace('${body}', content.join(''))

fs.writeFileSync('./main.tex', template)
console.log('main.tex created')
