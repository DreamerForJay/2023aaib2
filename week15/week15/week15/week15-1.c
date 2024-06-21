//LeetCode 3148. Find the XOR of Numbers Which Appear Twice
//т nums 柑瞷2Ω攫场ノXOR睼癬ㄓ
//计ぶ(程50计),ざ1..50ぇ丁,┮秨皚,硂肈碞穌﹚
//癘计瞷Ω计,街瞷2Ω
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
