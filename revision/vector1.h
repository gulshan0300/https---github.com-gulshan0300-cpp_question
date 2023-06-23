class vector{
    int*arr;
    int cs;
    int ms;

    vector(){
        cs=0;
        ms=1;
        arr =new int[ms];
    }

    void push_back(int d){
        if(cs==ms){
            int *old=arr;
            arr=new int[2*ms];
            ms=2*ms;
            for(int i=0;i<cs;i++){
                arr[i]=old[i];
            }
            delete []old;
            arr[cs]=d;
            cs++;
            return ;
        }
        arr[cs]=d;
        cs++;
        return;
    }

    void pop(){
        if(cs!=0){
            cs--;
        }
    }
    int front(){
        return arr[0];
    }
    int back(){
        return arr[cs];
    }
    bool isempty(){
        return cs==0;
    }
};