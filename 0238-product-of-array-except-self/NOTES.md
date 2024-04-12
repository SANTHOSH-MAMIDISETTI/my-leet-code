For ones, who did not understand how prefix-postfix works, lets change 1, 2, 3, 4 positions to symbols like a, b, c, d, so multiplying will be:
prefix:
->

|       a       |   a*b   | a*b*c | a*b*c*d |

postfix:
<-

| a*b*c*d | b*c*d |   c*d   |      d        |

the result is a multiply without the symbol in own position (the left value from prefix and the right one from postfix):
|    b*c*d  | a*c*d | a*b*d |   a*b*c   |




prefix:

| 1 | a | a * b | a * b * c |

postfix:
|b * c * d |  c * d | d | 1 |
