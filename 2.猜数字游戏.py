import curses
import string
from curses import wrapper 

#----------------------------
# 获得字符串
#
#
#----------------------------
def Getstr(stdscr):
    buffer = str()
    curses.echo()
    try:
        i = 0
        while True:
            ch = stdscr.getch()
            if ch != -1:
                if ch in (10, curses.KEY_ENTER): # curses.KEY_ENTER == 10
                    break
                if ch in (27,):
                    buffer = str()
                    break
                buffer += chr(ch)
                i += 1
    finally:
        curses.noecho()
    return buffer 

def main(stdscr):
    stdscr.clear()
    stdscr.addstr(0,50,"This is a Number Guess Game")
    curses.KEY_BACKSPACE
    Number = str()
   
    while Number != "1234":
        stdscr.addstr(1,50,"Please input Password: ")
        (y,x) = stdscr.getyx()
        Number = Getstr(stdscr)
        stdscr.move(2,50)
        stdscr.refresh()
    
    Price = 58;
    Number2 = 0 

    while Number2 != Price:
        stdscr.addstr(3,50,"Please input a number between 1 and 100: ")
        Number2 = int(Getstr(stdscr))
        stdscr.addstr(4,50,"Your input number is {0:}".format(str(Number2)))

        if( Number2 >=90 ):
            stdscr.addstr(5,50,"Too Bigger! Press any key to try again!")
            stdscr.refresh()
        elif( Number2 >= 70 and Number2 < 90 ):
            stdscr.addstr(5,50,"Bigger! Press any key to try again!    ")
            stdscr.refresh()
        elif( Number2 >= 1 and Number2 <= 30 ):
            stdscr.addstr(5,50,"Too Small! Press any key to try again! ")
            stdscr.refresh()
        elif( Number2 > 30 and Number2 <= 50 ):
            stdscr.addstr(5,50,"Small! Press any key to try again!     ")
            stdscr.refresh()
        else:
            if( Number2 ==  Price ):
                stdscr.addstr(5,50,"OK! You are right! Bye Bye!        ")
                stdscr.refresh()
            elif( Number2 < Price ):
                stdscr.addstr(5,50,"Sorry,a little smaller! Try again! ")
                stdscr.refresh()
            elif( Number2 > Price ):
                stdscr.addstr(5,50,"Sorry,a little bigger! Try again!  ")
                stdscr.refresh()
        stdscr.refresh()
    
    stdscr.refresh()
    stdscr.getkey()

wrapper(main)
