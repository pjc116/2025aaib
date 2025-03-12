
// week04-2.c
int maximumCount(int* nums, int numsSize) {

    int pos = 0, eng = 0; //迴圈前面是0
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] > 0) pos++;//正數
        if(nums[i] < 0) eng++;//負數
    } //迴圈中間，更新，修改他

    //迴圈後面把它拿來用
    if(pos>eng) return pos;
    else return eng;
}
