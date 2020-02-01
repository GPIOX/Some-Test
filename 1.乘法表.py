import curses
import string
from curses import wrapper

def main(stdscr):
    stdscr.clear()
    stdscr.addstr(0,50,"****九 九 乘 法 表 ****", curses.A_REVERSE)
    stdscr.move(1,0)

    x = 9
    y = 5

    for i in range(1,10):
        stdscr.move(y,x)
        stdscr.addstr("{0:=^}".format(str(i)), curses.A_REVERSE)
        x += 3

    x = 7;
    y = 6;

    for i in range(1,10):
        stdscr.move(y,x)
        stdscr.addstr("{0:=^}".format(str(i)), curses.A_REVERSE)
        y += 1
    
    x = 9
    y = 6

    for i in range(1,10):
        for j in range(1,10):
            stdscr.move(y,x)
            stdscr.addstr("{0:=<}".format(str(i*j)), curses.A_REVERSE)
            y += 1
        y = 6
        x += 3

    stdscr.refresh()
    stdscr.getkey()

wrapper(main)