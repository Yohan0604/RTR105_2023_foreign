#!/bin/bash
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


