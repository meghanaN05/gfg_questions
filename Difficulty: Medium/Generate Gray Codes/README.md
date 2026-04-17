<h2><a href="https://www.geeksforgeeks.org/problems/gray-code-1611215248/1">Generate Gray Codes</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><div><span style="font-size: 18px;">Given a number <strong>n</strong>, generate n bit </span><span style="font-size: 18px;">Gray codes</span><span style="font-size: 18px;">.&nbsp; </span><span style="font-size: 18px;">A Gray code sequence begin with 0 and</span><span style="font-size: 18px;"> successive codes differ by only one bit.&nbsp;</span></div>
<div>&nbsp;</div>
<div><span style="font-size: 18px;"><strong>Examples:</strong></span></div>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 2
<strong>Output: </strong>["00", "01", "11", "10"]
<strong>Explanation: </strong>
00 and 01 differ by one bit.
01 and 11 differ by one bit.
11 and 10 also differ by one bit.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 3
<strong>Output: </strong>["000", "001", "011", "010", "110", "111", "101", "100"]
<strong>Explanation:</strong>
000 and 001 differ by one bit.
001 and 011 differ by one bit.
011 and 010 differ by one bit.
Similarly, every successive pattern 
differs by one bit.</span></pre>
<div><span style="font-size: 18px;"><strong>Constraints :</strong></span></div>
<div><span style="font-size: 18px;">1 ≤ n ≤ 16</span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;