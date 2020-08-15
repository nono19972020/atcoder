/*尺取法*/
//数列の区間の長さや最大値を数え上げる系
//計算量をO(n**2)からO(n)にする
//問題によって中身を変更する
    long long count = 0;
    long long right = 0;
    long long sum = 0;
    for(long long left = 0; left < n; left++){
        while(right < n and sum < k){
            sum += a[right];
            right++;
        }
        /*if(sum < k){
            break;
        }いらないかも*/

        count += n-right+1;

        if(right == left){
            right++;
        }
        else{
            sum -= a[left];
        }

    }
