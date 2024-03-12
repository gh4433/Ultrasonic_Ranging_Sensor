file = fopen('data.txt','w')
for i=1 : 1 : size(out.simout3, 1)
    fprintf(file,'%d, %d\n' , out.simout3(i,1), out.simout2(i,1) );
end
