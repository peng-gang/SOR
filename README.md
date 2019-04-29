# SOR
This program is used to calculate the smallest overlap region in Copy Number Variation(CNV) analysis. 

## Input File
chr1	100	300	1	S1  
chr1	500	600	3	S1  
chr1	700	800	1	S1  
chr2	100	300	1	S1  
chr1	200	550	3	S2  
chr1	750	850	3	S2  
chr2	100	200	1	S2  

5 Columns  
Column 1: chromosome  
Column 2: star position  
Column 3: end position  
Column 4: number of copies  
Column 5: sample id  


## Command
SOR InputFile OutputFile
