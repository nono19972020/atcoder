
//bit全探索
bit < (1 << n)が2のn乗

for(int bit = 0; bit < (1 << n); bit++){
  if(bit & (1 << mask)){
    bitをmaskに被せた時の処理を書く
  }

  //問題文の処理を書く
}
