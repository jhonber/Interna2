# Problem set generation

Use the file config.json to define the order of the problems, time limits, memory limits, etc.

## Command line

```bash
node generate.js
pdflatex main.tex
```

### How does it work

The program takes the file `template.tex` as reference and add all the problems
described in the `config.json`. Then a new file called `main.tex` is created
and you can compile it with pdflatex.