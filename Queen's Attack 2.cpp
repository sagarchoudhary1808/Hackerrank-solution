#include <bits/stdc++.h>

using namespace std;

int main(){
    int right,left,up,down,rightup,rightdown,leftup,leftdown;
    int n,k;
    cin>>n>>k;
    int rq,cq;
    int ro,co;
    cin>>rq>>cq;
    right=n-cq;
    left=cq-1;
    up=n-rq;
    down=rq-1;
    
    if(left<up){
        leftup=left;
    }
    else{
        leftup=up;
    }
    if(left<down){
        leftdown=left;
    }
    else{
        leftdown=down;
    }
    if(right<up){
        rightup=right;
    }
    else{
        rightup=up;
    }
    if(right<down){
        rightdown=right;
    }
    else{
        rightdown=down;
    }
    
    for(int i=0;i<k;i++){
        cin>>ro>>co;
        
        if(rq==ro&&cq>co){
            if(cq-co-1<left)
                left=cq-co-1;
        }
        else if(rq==ro&&cq<co){
            if(co-cq-1<right)
                right=co-cq-1;
        }
        else if(cq==co&&rq<ro){
            if(ro-rq-1<up){
                up=ro-rq-1;
            }
        }
        else if(cq==co&&rq>ro){
            if(rq-ro-1<down){
                down=rq-ro-1;
            }
        }
        else if(co<cq&&ro>rq){
            if((cq-co)==(ro-rq)){
                if(ro-rq-1<leftup){
                    leftup=ro-rq-1;
                }
            }
        }
        else if(co<cq&&ro<rq){
            if((co-cq)==(ro-rq)){
                if(cq-co-1<leftdown){
                    leftdown=cq-co-1;
                }
            }
        }
        else if(co>cq&&rq>ro){
            if((co-cq)==(rq-ro)){
                if(co-cq-1<rightdown){
                    rightdown=co-cq-1;
                }
            }
        }
        else if(co>cq&&rq<ro){
            if((co-cq)==(ro-rq)){
                if(ro-rq-1<rightup){
                    rightup=ro-rq-1;
                }
            }
        }
        
    }
    cout<<right+left+up+down+rightup+rightdown+leftup+leftdown;
    return 0;
}
