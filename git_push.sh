#!/bin/bash

#get date as yyyy-mm-dd 標準出力を受け取る
stdout=`date +%F` 

#差分をadd
git add . 

#日付けでcommit
git commit -m "$stdout"

#git push
git push -u origin master