
// week04-2.c
int maximumCount(int* nums, int numsSize) {

    int pos = 0, eng = 0; //�j��e���O0
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] > 0) pos++;//����
        if(nums[i] < 0) eng++;//�t��
    } //�j�餤���A��s�A�ק�L

    //�j��᭱�⥦���ӥ�
    if(pos>eng) return pos;
    else return eng;
}
