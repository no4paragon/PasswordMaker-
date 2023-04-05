
<h2>Requirements</h2>
<p>Students shall create the entire program, so the instructor will not provide any starting source code. The website does include two example text files students may use, but the program will work with any input file.</p>
<p>Upon execution, the program shall look for and open the UNC-16 encoded ASCII file (i.e. a text file). By default, the file will exist in the same directory as the program, and it requires the name 'input.txt'. For extra credit, students may modify this to instead open the file pointed to by the command line arguments (i.e. argv and argc).</p>
<p>The program shall then use the input file to establish the password generator's vocabulary. To do so, it shall extract every unique token from the file over a minimum length. After establishing the unique tokens, the password generator shall use those tokens to begin producing twenty random passwords. The <em>passwords </em>the program produces must meet the following requirements:</p>
<ul>
<li>Four (4) randomly selected tokens</li>
<li>Space between each token</li>
<li>Append the number '1' to the last place of the password.</li>
</ul>
<p>The <em>tokens </em>used to generate the password shall meet the following requirements:</p>
<ul>
<li>Minimum token length: 3-6 characters (student's choice based on performance).&nbsp;</li>
<li>No trailing punctuation with each token</li>
<li>If the first character in a token is a letter, it must be upper-case</li>
<li>All other characters must be lower case</li>
<li>Extra credit: No digits may appear anywhere in a token</li>
</ul>
<p>After printing examples of twenty passwords the program produces, it shall exit. The following are examples of valid passwords that meet these requirements:</p>
<pre>Blink Teeth Warlike Abandoned1<br>Argue Puny Instruct Meddle1<br>2009,10 Shaky Knowing Canvas1         (Not a valid extra credit password)<br>Adjustment Warm Zebra Trains1<br>Rotten Puffy Gruesome Optimal1</pre>
<h2>Delivery</h2>
<p>On or before the due date, students shall submit their version of their main program (e.g., main.cpp) and the output their program produced when they ran it locally (I should see twenty sets of random passwords).&nbsp;</p>

<h2>Other Notes</h2>
<p>In this assignment, students ABSOLUTELY SHOULD use the data structures provided in the C++ standard library.&nbsp;</p>
<p>During development, it will help to make a few example files to verify your token extraction works correctly. Instead of using something huge like the input files the instructor provided, simply create a basic text file in notepad (or vi) containing only a handful of words. Then, after you extract tokens, you can verify the set of tokens is correct. Proof out token extraction before starting password generation.&nbsp;</p>
<p>This will help reading files: <a href="https://www.cplusplus.com/doc/tutorial/files/" target="_blank" class="external" rel="noreferrer noopener"><span>https://www.cplusplus.com/doc/tutorial/files/</span><span class="external_link_icon" style="margin-inline-start: 5px; display: inline-block; " role="presentation"><svg viewBox="0 0 1920 1920" version="1.1" xmlns="http://www.w3.org/2000/svg" style="width:1em; height:1em; vertical-align:middle; fill:currentColor">
    <path d="M1226.66667,267 C1314.88,267 1386.66667,338.786667 1386.66667,427 L1386.66667,427 L1386.66667,853.666667 L1280,853.666667 L1280,693.666667 L106.666667,693.666667 L106.666667,1493.66667 C106.666667,1523 130.56,1547 160,1547 L160,1547 L1226.66667,1547 C1256.10667,1547 1280,1523 1280,1493.66667 L1280,1493.66667 L1280,1280.33333 L1386.66667,1280.33333 L1386.66667,1493.66667 C1386.66667,1581.88 1314.88,1653.66667 1226.66667,1653.66667 L1226.66667,1653.66667 L160,1653.66667 C71.7866667,1653.66667 0,1581.88 0,1493.66667 L0,1493.66667 L0,427 C0,338.786667 71.7866667,267 160,267 L160,267 Z M1584.37333,709.293333 L1904.37333,1029.29333 C1925.17333,1050.09333 1925.17333,1083.90667 1904.37333,1104.70667 L1904.37333,1104.70667 L1584.37333,1424.70667 L1508.96,1349.29333 L1737.86667,1120.38667 L906.613333,1120.38667 L906.613333,1013.72 L1737.86667,1013.72 L1508.96,784.706667 L1584.37333,709.293333 Z M1226.66667,373.666667 L160,373.666667 C130.56,373.666667 106.666667,397.666667 106.666667,427 L106.666667,427 L106.666667,587 L1280,587 L1280,427 C1280,397.666667 1256.10667,373.666667 1226.66667,373.666667 L1226.66667,373.666667 Z" stroke="none" stroke-width="1" fill-rule="evenodd"></path>
</svg>
<span class="screenreader-only">Links to an external site.</span></span></a>&nbsp;</p>
<p>Here's something extra: <a href="http://www.cplusplus.com/articles/DEN36Up4/" target="_blank" class="external" rel="noreferrer noopener"><span>http://www.cplusplus.com/articles/DEN36Up4/</span><span class="external_link_icon" style="margin-inline-start: 5px; display: inline-block; " role="presentation"><svg viewBox="0 0 1920 1920" version="1.1" xmlns="http://www.w3.org/2000/svg" style="width:1em; height:1em; vertical-align:middle; fill:currentColor">
    <path d="M1226.66667,267 C1314.88,267 1386.66667,338.786667 1386.66667,427 L1386.66667,427 L1386.66667,853.666667 L1280,853.666667 L1280,693.666667 L106.666667,693.666667 L106.666667,1493.66667 C106.666667,1523 130.56,1547 160,1547 L160,1547 L1226.66667,1547 C1256.10667,1547 1280,1523 1280,1493.66667 L1280,1493.66667 L1280,1280.33333 L1386.66667,1280.33333 L1386.66667,1493.66667 C1386.66667,1581.88 1314.88,1653.66667 1226.66667,1653.66667 L1226.66667,1653.66667 L160,1653.66667 C71.7866667,1653.66667 0,1581.88 0,1493.66667 L0,1493.66667 L0,427 C0,338.786667 71.7866667,267 160,267 L160,267 Z M1584.37333,709.293333 L1904.37333,1029.29333 C1925.17333,1050.09333 1925.17333,1083.90667 1904.37333,1104.70667 L1904.37333,1104.70667 L1584.37333,1424.70667 L1508.96,1349.29333 L1737.86667,1120.38667 L906.613333,1120.38667 L906.613333,1013.72 L1737.86667,1013.72 L1508.96,784.706667 L1584.37333,709.293333 Z M1226.66667,373.666667 L160,373.666667 C130.56,373.666667 106.666667,397.666667 106.666667,427 L106.666667,427 L106.666667,587 L1280,587 L1280,427 C1280,397.666667 1256.10667,373.666667 1226.66667,373.666667 L1226.66667,373.666667 Z" stroke="none" stroke-width="1" fill-rule="evenodd"></path>
</svg>
<span class="screenreader-only">Links to an external site.</span></span></a>&nbsp;</p>
<p>&nbsp;</p></div>
