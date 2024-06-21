//LeetCode 3148. Find the XOR of Numbers Which Appear Twice
//��� nums �̡u��n�X�{2���v����A������XOR�V�_��
//�]�Ʀr�ܤ�(�̦h50�Ӽ�),�B����1..50����,�ҥH�}�Ӱ}�C,�o�D�N�d�w�F
//�O�U�u�Ʀr�X�{�����ơv,�ݽ֥X�{2��
int duplicateNumbersXOR(int* nums, int numsSize) {
    int table[51] = {};
    for(int i=0; i<numsSize;i++){
        table[nums[i]]++;
    }
    int ans=0;
    for(int i=1;i<=50;i++){
        if(table[i]==2) ans=ans^i;
    }
    return ans;
}
