void shortest_jobfirst(void){
	FILE *f;
    f=fopen(output,"a");
   	fprintf(f," Shortest-job Non-premptive");

	struct node *temp=header;
	struct node *temp2=temp;
    int count=countNodes(temp);
    int i=0,i=0 , j=0,burst[count],arrival[count],pid[count], waiting=0,tempburst=0,totalWaiting=0;
    
    while(temp!=NULL){
    sortJobs(temp2);
    temp=temp->next; 
		}
		
		temp=temp2;
    for(ii;ii<count;ii++){
    burst[ii]=temp->burstTime;
	arrival[ii]=temp->arrivalTime;
	pid[ii]=temp->pid;
	temp=temp->next;
    		}
    		
 for(i;i<count;i++){
for(j=0;j<count;j++){
	if(waiting-arrival[j] >= 0 && burst[j] != 0){
		waiting=waiting-arrival[j];
		totalWaiting=totalWaiting+waiting;
		
		printf("\n p%d = %d ms.",pid[j],waiting);
		fprintf(f,"\n p%d = %d ms.",pid[j],waiting);

		waiting=waiting+burst[j]+arrival[j];
		burst[j]=0;
	}
}	
 }
