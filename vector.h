template<typename T>
class vector {
int cs;
int ms;
T *arr;
public:
    vector(){
   this-> cs=0;
    this->ms=1;
    arr= new T[ms];
    }
    void push_back(T d){
    if(cs==ms){
        T *old_arr =arr;
        arr = new T[2*ms];
        ms=2*ms;
        for(int i=0;i<cs;i++){
            arr[i]=old_arr[i];
        }
        delete []old_arr;
    }
    arr[cs]=d;
    cs++;
    //delete []old_arr;
    }
    int capacity(){
    return ms;
    }
    int size(){
    return cs;
    }
    T operator[] (int i){
    return arr[i];
    }

};
