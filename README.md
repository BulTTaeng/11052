
# "11052"

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

![button](https://github.com/Choi-JaeHyeok-21500749/11052/blob/main/11052_pro.JPG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

Let;s save the max value in the dp array.

There is only one option for taking 1 card. Just buying one pack card.
There is two option for taking 2 cards. (1+1) , (2). Save the larger value in dp array.

There is tree option for taking 3 cards. (1+1+1) , (1+2) , (3).

However, the biggest value of taking 2 cards is in the dp[2]. We already consider (1+1) (2) case in dp[2].

That means (dp[1]+dp[1]+dp[1]) case is smaller or same with (dp[2]+dp[1]) case.

So, there is two option for taking 3 cards.

3 option for taking 4 cards. (dp[1] + dp[3]) (dp[2] + dp[2]) (p[4])
3 option for taking 5 cards. (dp[1] + dp[4]) (dp[2] + dp[3]) (p[5])

.

.

.

Equation founded~~~

## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!

