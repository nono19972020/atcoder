#!/bin/bash
stdout=`date +%F` #get date as yyyy-mm-dd 標準出力を受け取る
echo $stdout

git add . #差分をadd
git commit -m "$stdout"#日付けでcommit
git push -u origin master #git push