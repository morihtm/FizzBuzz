#define WAIT_TIME (1000)

void setup() {
 Serial.begin(115200);
}

void loop () {
  int i=0;
  for(i=1;i<101;i++){
    if(i%15 == 0){
      printf("%d : FizzBuzz\n",i);
    }else if(i%3 == 0){
      printf("%d : Buzz\n",i);
    }else if(i%5 == 0){
      printf("%d : Fizz\n",i);
    }else{
    printf("%d : \n",i);
   
  }
  delay(WAIT_TIME);
} 
}
