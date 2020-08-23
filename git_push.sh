#!/bin/bash
stdout=`date +%F` #get date as yyyy-mm-dd 標準出力を受け取る
echo $stdout

git add .
git commit -m "$stdout"