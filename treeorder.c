#include <stdio.h>

int Cek(int *pre, int *post, int *in, int n){
    if(pre[0] != post[n - 1]){
        return 0;
    }

    if(n == 1){
        if(pre[0] == post[0] && post[0] == in[0]){
            return 1;
        } else{
            return 0;
        }
    }

    int i;
    for(i = 0; i < n; i++){
        if(in[i] == pre[0]){
            break;
        }

        if(i == n){
            return 0;
        }
    }

    int j, result = 1, post_r = post[n - 2], leftn = 0;

    for(j = 0; j < n; j++){
        if(pre[j] == post_r){
            if((result *= Cek(pre + j, post + j - 1, in + i + 1, n - j)) == 0){
                return 0;
            }
            leftn = j - 1;
            break;
        }
    }

    if(i != 0){
        result *= Cek(pre + 1, post, in + 1, leftn);
    }

    return result;
}

int main()
{    int T, i;
    scanf("%d", &T);

    int pre[T], post[T], in[T];

    for(i = 0; i < T; i++) scanf("%d", &pre[i]);
    for(i = 0; i < T; i++) scanf("%d", &post[i]);
    for(i = 0; i < T; i++) scanf("%d", &in[i]);

    if(Cek(pre, post, in, T)) printf("yes\n");
    else printf("no\n");
}
