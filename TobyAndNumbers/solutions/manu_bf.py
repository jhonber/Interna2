from collections import deque
import sys
import io

class Input:

    def __init__(self):
        self.data = deque([token for line in sys.stdin.readlines() for token in line.split()])

    def next(self):
        return self.data.popleft()

    def next_int(self):
        return int(self.data.popleft())

    def next_array(self, n, parser):
       return [parser(self.next()) for i in range(n) ]

class Output:

    def __init__(self):
        self.data = io.StringIO()

    def write(self, d, end='\n'):
        d = str(d)
        self.data.write(d + end)

    def flush(self):
        sys.stdout.write(self.data.getvalue())
        self.data.close()


if __name__ == '__main__':
    cin = Input()
    cout = Output()

    t = cin.next_int()
    for _ in range(t):
        n = cin.next_int()
        a = cin.next_array(n, int)
        while (len(a) > 1):
            a.sort()
            if (a[-1] == a[-2]):
                del a[-1]
            else:
                a[-1] -= a[-2]
        cout.write(a[0])
    cout.flush()
