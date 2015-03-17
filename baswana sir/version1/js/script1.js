window.onload = function()
	{  
	var pcnt=0;
	var paper = new Raphael(document.getElementById('canvas_container'), 1200, 650);  
	var cnt=0;
	var T=200;
	var PX=new Array();
	var PY=new Array();
	var draw_points=new Array();
	var centerx=0;
	var centery=0;
	var radius=0;
	var C=paper.circle(centerx,centery,radius);
	var C1=paper.circle(centerx,centery,radius);
	var C2=paper.circle(centerx,centery,radius);
	function fun(Ci,x,y,r,loop,idx)
		{
			var anim = Raphael.animation({cx:x, cy:y,r:r}, T);
			Ci.animate(anim.delay(cnt));
			cnt=cnt+T;
		}
	function distance(x1,y1,x2,y2)
		{
			var sq=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
			return Math.sqrt(sq);
		}

	function isOutside(cx,cy,r,x1,y1)
		{
			if(distance(cx,cy,x1,y1)>r)	return true;
			else						return false;
		}

	function Three(x1,y1,x2,y2,x3,y3)
		{
			var re=new Array();
			var divi=x1*(y2-y3)-y1*(x2-x3)+x2*y3-x3*y2;
			divi=2*divi;
			re[0]=0;
			re[0]=(x1*x1+y1*y1)*(y2-y3);
			re[0]=re[0]+(x2*x2+y2*y2)*(y3-y1);
			re[0]=re[0]+(x3*x3+y3*y3)*(y1-y2);
			re[0]=re[0]/divi;
			re[1]=0;
			re[1]=(x1*x1+y1*y1)*(x3-x2);
			re[1]=re[1]+(x2*x2+y2*y2)*(x1-x3);
			re[1]=re[1]+(x3*x3+y3*y3)*(x2-x1);
			re[1]=re[1]/divi;
			re[2]=0;
			re[2]=(re[0]-x1)*(re[0]-x1)+(re[1]-y1)*(re[1]-y1);
			re[2]=Math.sqrt(re[2]);
			return re;
		}
	
	$("#canvas_container").click(function(e)
		{
			PX[pcnt]=e.pageX;
			PY[pcnt]=e.pageY;
			draw_points[pcnt] = paper.circle(PX[pcnt],PY[pcnt],2); 
			draw_points[pcnt].attr({fill:'#000',stroke:"none"});
			console.log("here");
			pcnt=pcnt+1;
			if(pcnt==2)
				{

					centerx=(PX[0]+PX[1])/2;
					centery=(PY[0]+PY[1])/2;
					radius=distance(PX[0],PY[0],PX[1],PY[1])/2;
					centerx1=centerx;
					centery1=centery;
					centerx2=centerx;
					centery2=centery;
					radius1=radius;
					radius2=radius;	
					C=paper.circle(centerx,centery,0);
					C1=paper.circle(centerx,centery,0);
					C2=paper.circle(centerx,centery,0);
					C.attr({stroke:"#000",'stroke-width': 5.0});
					C1.attr({stroke:'#f00c0c','stroke-width': 3.0});
					C2.attr({stroke:'#0000FF','stroke-width': 1.0});
					fun(C,centerx,centery,radius);
				}
			var i=pcnt-1;
			if(pcnt>2)
				{

					if(isOutside(centerx,centery,radius,PX[i],PY[i])==true) 
						{
							console.log(centerx);
							console.log(centery);
							console.log(radius);
							var centerx1=(PX[0]+PX[i])/2;
							var centery1=(PY[0]+PY[i])/2;
							var radius1=(distance(PX[i],PY[i],PX[0],PY[0]))/2;
							for(var j=1;j<i;j++)
								{
									if(isOutside(centerx1,centery1,radius1,PX[j],PY[j])==true)
										{
											console.log(centerx1);
											console.log(centery1);
											console.log(radius1);
											var centerx2=(PX[i]+PX[j])/2;
											var centery2=(PY[i]+PY[j])/2;
											var radius2=(distance(PX[i],PY[i],PX[j],PY[j]))/2;
											for(var k=0;k<j;k++)
												{
													if(isOutside(centerx2,centery2,radius2,PX[k],PY[k])==true)
														{
															console.log(centerx2);
															console.log(centery2);
															console.log(radius2);
															ansarray=Three(PX[i],PY[i],PX[j],PY[j],PX[k],PY[k]);
															centerx2=ansarray[0];
															centery2=ansarray[1];
															radius2=ansarray[2];
															fun(C2,centerx2,centery2,radius2,3,k);
														}
													
												}
											centerx1=centerx2;
											centery1=centery2;
											radius1=radius2;	
											fun(C2,centerx2,centery2,radius2,3,k);
											fun(C1,centerx1,centery1,radius1,2,j);					
										}
									centerx2=centerx1;
									centery2=centery1;
									radius2=radius1;
									
								}
							centerx=centerx1;
							centery=centery1;
							radius=radius1;
							centerx2=centerx;
							centery2=centery;
							radius2=radius;
							fun(C2,centerx2,centery2,radius2,3,k);
							fun(C1,centerx1,centery1,radius1,2,j);			
							fun(C,centerx,centery,radius,1,i);
						}
					
					
					cnt=0;
				}
	}); 

    
    
   
	
	

	
	/*var centerx=(PX[0]+PX[1])/2;
	var centery=(PY[0]+PY[1])/2;
	var radius=distance(PX[0],PY[0],PX[1],PY[1])/2;
	var C=paper.circle(centerx,centery,radius);
	var C1=paper.circle(centerx,centery,radius);
	var C2=paper.circle(centerx,centery,radius);
	C.attr({stroke:"#000",'stroke-width': 5.0});
	C1.attr({stroke:'#f00c0c','stroke-width': 3.0});
	C2.attr({stroke:'#0000FF','stroke-width': 1.0});
	for(var i=2;i<n;i++) 
				{	
					
					if(isOutside(centerx,centery,radius,PX[i],PY[i])==true) 
						{
							console.log(centerx);
							console.log(centery);
							console.log(radius);
							var centerx1=(PX[0]+PX[i])/2;
							var centery1=(PY[0]+PY[i])/2;
							var radius1=(distance(PX[i],PY[i],PX[0],PY[0]))/2;
							for(var j=1;j<i;j++)
								{
									
									if(isOutside(centerx1,centery1,radius1,PX[j],PY[j])==true)
										{
											console.log(centerx1);
											console.log(centery1);
											console.log(radius1);
											var centerx2=(PX[i]+PX[j])/2;
											var centery2=(PY[i]+PY[j])/2;
											var radius2=(distance(PX[i],PY[i],PX[j],PY[j]))/2;
											for(var k=0;k<j;k++)
												{
													if(isOutside(centerx2,centery2,radius2,PX[k],PY[k])==true)
														{
															console.log(centerx2);
															console.log(centery2);
															console.log(radius2);
															ansarray=Three(PX[i],PY[i],PX[j],PY[j],PX[k],PY[k]);
															centerx2=ansarray[0];
															centery2=ansarray[1];
															radius2=ansarray[2];
														}
													fun(C2,centerx2,centery2,radius2,3,k);
												}
											centerx1=centerx2;
											centery1=centery2;
											radius1=radius2;
										}
									centerx2=centerx1;
									centery2=centery1;
									radius2=radius1;
									fun(C1,centerx1,centery1,radius1,2,j);
								}
							centerx=centerx1;
							centery=centery1;
							radius=radius1;
						}
					centerx1=centerx;
					centery1=centery;
					centerx2=centerx;
					centery2=centery;
					radius1=radius;
					radius2=radius;
					fun(C,centerx,centery,radius,1,i);
				}*/
	}  