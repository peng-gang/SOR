# SOR
This program is used to calculate the smallest overlap region in Copy Number Variation(CNV) analysis. 

## Compile
Download the source files and complie them with g++ like  
g++ *.cpp -o SOR

## Command
SOR InputFile OutputFile

## Input File Format
chr1	100	300	0.5	S1  
chr1	500	600	1.5	S1  
chr1	700	800	0.5	S1  
chr2	100	300	0.5	S1  
chr1	200	550	1.5	S2  
chr1	750	850	1.5	S2  
chr2	100	200	0.5	S2  

5 Columns  
Column 1: chromosome  
Column 2: star position  
Column 3: end position  
Column 4: ratio (1: normal, less than 1 deletion, more than 1, duplication) 
Column 5: sample id  


# data
The file in data directory is the CNA data we analyzed in the paper "Correlating genomic copy number alterations with clinicopathologic findings in 75 cases of hepatocellular carcinoma". 
