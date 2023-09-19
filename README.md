# RTR105_2023_foreign
Electronic notes of computer studies(Basic course) subject
## First lesson
 whoami  
 pwd  
 ls  
 history  
 man pwd  
 pwd - L  
 uname --all  
  
## Second lesson
Ctrl + Alt + T   - new terminal window
Ctrl + Shift + T - new terminal in window
Ctrl + L         - "clear" screen
btn UP, btn DOWN - previous executed commadns
history          - list with used commands

first symbols of command name + Tab (one more Tab) - get command full name
or list commands with named first symbols

man command_name - information about how command works

command_name -keyletter1 -keyletter2
command_name -keyletter1 --keyword2
command_name -keyletter1keyletter2

three important "questions":
who? where? what?
whoami - user name
pwd    - current directory - address (absolute)
         absolute address starts with "/" root
         relative address of user "home" directory starts with "~"
         relative address of current directory starts with "."
         relative address of parent directory starts with ".."

ls     - list of files and directories
cd     - change directory
tree   - observe tree of file system

## My_first_shell_script.sh!/bin/bash
echo "--whoami result: ---"  
whoami  
echo "--- pwd result: ----"  
pwd  
echo "--- ls result: ----"  
ls  
echo "--- ls result after a.text creation: ----"  
echo "12345" > a.txt  
ls  
echo "--- ls result after copy of a.text: ----"  
cp a.txt b.txt  
ls  
echo "--- ls result after ABC creation ---"   
mkdir ABC  
ls   
echo "---ls result after  move of b.txt and aa.txt deletion ---"  
mv b,txt ABC/  
rm a.txt  


