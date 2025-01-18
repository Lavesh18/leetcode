class Solution {
    public int coinChange(int[] coins, int amount) {
        if(amount == 0)
        {
            return 0;
        }
        int[] amtDp = new int[amount+1];

        for(int i=1;i<=amount;i++)
        {
            amtDp[i] = Integer.MAX_VALUE;

            for(int coin : coins)
            {
                if(coin<=i && amtDp[i-coin]!=Integer.MAX_VALUE)
                {
                   amtDp[i] =  Math.min(amtDp[i],1+amtDp[i-coin]);
                }
            }

        }
        if(amtDp[amount]== Integer.MAX_VALUE)
        {
            return -1;
        }


        return amtDp[amount];
    }
}