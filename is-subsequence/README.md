[Discussion Post (created on 26/9/2021 at 23:40)](https://leetcode.com/problems/is-subsequence/discuss/1542204/Recursive-and-DP-Approach-or-C%2B%2B-or-4ms-or-LCS-Approach)  
<h2>392. Is Subsequence</h2><h3>Easy</h3><hr><div><p>Given two strings <code>s</code> and <code>t</code>, check if <code>s</code> is a <strong>subsequence</strong> of <code>t</code>.</p>

<p>A <strong>subsequence</strong> of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., <code>"ace"</code> is a subsequence of <code>"abcde"</code> while <code>"aec"</code> is not).</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre style="position: relative;"><strong>Input:</strong> s = "abc", t = "ahbgdc"
<strong>Output:</strong> true
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre><p><strong>Example 2:</strong></p>
<pre style="position: relative;"><strong>Input:</strong> s = "axc", t = "ahbgdc"
<strong>Output:</strong> false
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= s.length &lt;= 100</code></li>
	<li><code>0 &lt;= t.length &lt;= 10<sup>4</sup></code></li>
	<li><code>s</code> and <code>t</code>&nbsp;consist&nbsp;only of lowercase English letters.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> If there are lots of incoming <code>s</code>, say <code>s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>k</sub></code> where <code>k &gt;= 10<sup>9</sup></code>, and you want to check one by one to see if <code>t</code> has its subsequence. In this scenario, how would you change your code?</div>