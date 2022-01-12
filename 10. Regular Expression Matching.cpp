int n = s.length(), m = t.length();
		vector<vector<bool>>dp (n + 1, vector<bool> (m + 1, false));
		dp[n][m] = true;
		for (int i = n; i >= 0; i --) {
			for (int j = m - 1; j >= 0; j--) {
				int matched = i != n and (s[i] == t[j] or t[j] == '.');
				if (j + 1 < m and t[j + 1] == '*')
					dp[i][j] = (matched and dp[i + 1][j]) or (dp[i][j + 2]);
				else if (matched)
					dp[i][j] = dp[i + 1][j + 1];
			}
		}
		return dp[0][0];
