#include <iostream>
using namespace std;
int main()
{
	int a,b=2,c[3]={0},m[1001]={0},n[3]={0},i=0,j=0,sum[3]={0},p=0,max=0;
    for(a=100;a<=999;a++){
    	b=2;
    	while(1){
    	    if(a%b==0){
    		    break;
		    }else b++;
		    if(b==a){
		    	m[a]++;
		    	break; 
			}
	    }
	}
	for(a=100,b=2;a<=999;a++){
		c[0]=c[1]=c[2]=0;
		if(m[a]!=0){
			c[0]=(a%100)%10;//��λ
			c[1]=(a%100)/10;//ʮλ
			c[2]=a/100;//��λ 
			n[0]=c[0]*c[0];
			n[1]=c[1]*c[1];
			n[2]=c[2]*c[2];
			sum[0]=c[0]+c[1]+c[2]; //��λ���ĺ� 
			sum[1]=n[0]+n[1]+n[2]; //��λ��ƽ���ĺ� 
			p=c[0]*c[1]*c[2]; //��������֮�� 
		}
		if(m[a]==0){
			continue;
		}
		while(1){
    	    if(sum[0]%b==0){
    	    	m[a]=0;
    		    break;
		    }else b++;
		    if(b==sum[0]){
		    	break;
			}
	    }
	    if(m[a]==0){
	    	continue;
		}
	    b=2;
	    while(1){
    	    if(p%b==0){
    	    	m[a]=0;
    		    break;
		    }else b++;
		    if(b==p){
		    	break;
			}
	    }
	    if(m[a]==0){
	    	continue;
		}
		b=2;
		while(1){
    	    if(sum[1]%b==0){
    	    	m[a]=0;
    		    break;
		    }else b++;
		    if(b==sum[1]){
		    	break;
			}
			}
	    }
	for(a=100;a<=999;a++){
		if(m[a]==1){
			j++;
			sum[2]=sum[2]+a;
			max=a;
		}
	}
	cout<<"���������ĸ���Ϊ"<<j<<endl;
	cout<<"���г�������֮��Ϊ"<<sum[2]<<endl;
	cout<<"���ĳ�������Ϊ"<<max<<endl;
	return 0;
}
