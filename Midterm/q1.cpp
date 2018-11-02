#include <iostream>
#include <unistd.h>

using namespace std;

double& mean(int *first, int length){
  double *mean=new double();
  for(int i =0; i<length; i++){
    mean += *(first+i)
  }
  mean = mean/length;
  return *mean;
}

int main() {
  double arr[5] = {1.2, 5.2, 3.1, 4.1, 8};
  int *first = arr[0];
  int length = 5;
  for (int i = 0; i < length; i++)
  	{
  		cout << arr[i]<<endl;
  	}
  cout<<"mean is " + &mean(first,length)<<endl;

  if(&mean(first,length)>3.2){
    cout<<"mean is greater than 3.2!"<<endl;
  }
  else   if(&mean(first,length)<3.2){
      cout<<"mean is less than 3.2!"<<endl;
    }
}
