function drawChart(title,t1,t2,t3,v1,v2,v3){
	$("#content").html('<canvas id="chart" width="400" height="300" ></canvas>');	
	var chart = new AwesomeChart('chart');
	chart.title = title;
	chart.data = [v1,v2,v3];
	chart.labels = [t1,t2,t3];
	chart.draw();
}