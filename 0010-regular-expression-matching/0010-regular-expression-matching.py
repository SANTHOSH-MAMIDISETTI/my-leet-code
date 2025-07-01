class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        """
        Determines if a string s matches a regular expression pattern p.

        This solution uses dynamic programming to build a table of matches
        for all substrings of s and subpatterns of p.
        """
        # Get the lengths of the string and pattern
        s_len = len(s)
        p_len = len(p)

        # Create a DP table with dimensions (s_len + 1) x (p_len + 1)
        # dp[i][j] will be True if the first i chars of s match the first j chars of p
        dp = [[False] * (p_len + 1) for _ in range(s_len + 1)]

        # --- Step 1: Initialize Base Cases ---

        # An empty pattern matches an empty string
        dp[0][0] = True

        # Handle patterns like "a*", ".*", "a*b*", etc., which can match an empty string
        # This initializes the first row of the DP table.
        for j in range(1, p_len + 1):
            # If the current pattern char is '*', it can match zero of the preceding char.
            # So, the result depends on the pattern two steps back (skipping the char and '*').
            if p[j - 1] == '*':
                dp[0][j] = dp[0][j - 2]

        # --- Step 2: Fill the rest of the DP table ---

        # Iterate through the string s (rows of the table)
        for i in range(1, s_len + 1):
            # Iterate through the pattern p (columns of the table)
            for j in range(1, p_len + 1):
                # Get the current characters from s and p.
                # Note: s_char corresponds to dp[i] and p_char to dp[j].
                s_char = s[i - 1]
                p_char = p[j - 1]

                # --- Step 3: Apply Matching Rules (Transitions) ---

                # Case 1: The pattern character is a normal letter or '.'
                if p_char != '*':
                    # A match occurs if the previous subproblem was a match AND
                    # the current characters match (or pattern is '.')
                    if dp[i - 1][j - 1] and (s_char == p_char or p_char == '.'):
                        dp[i][j] = True
                
                # Case 2: The pattern character is '*'
                else:
                    # '*' represents zero or more of the preceding character (p[j-2])
                    
                    # Option A: '*' matches ZERO of the preceding element.
                    # In this case, we look at the pattern as if the char and '*' weren't there.
                    # This value is taken from dp[i][j-2].
                    option_a = dp[i][j - 2]
                    
                    # Option B: '*' matches ONE OR MORE of the preceding element.
                    # This is only possible if the current string char (s_char) matches
                    # the character before the '*' in the pattern (p[j-2]).
                    # If they match, the result depends on the previous string character's match.
                    # This value is taken from dp[i-1][j].
                    preceding_p_char = p[j - 2]
                    option_b = False
                    if s_char == preceding_p_char or preceding_p_char == '.':
                        option_b = dp[i - 1][j]
                    
                    # The current state is True if either option is possible.
                    dp[i][j] = option_a or option_b

        # --- Step 4: Return the Final Answer ---
        # The result for the entire string and pattern is in the bottom-right cell.
        return dp[s_len][p_len]