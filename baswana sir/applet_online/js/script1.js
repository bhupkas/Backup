function re()
	{
		paper.remove();
		document.getElementById('uname').disabled=false;
		document.getElementById('fill').disabled=false;
		$('ul li').remove();
	}

function te()
	{   
	document.getElementById('uname').disabled=true;
	document.getElementById('fill').disabled=true;
	paper = Raphael(document.getElementById('canvas_container'), 1200, 700);  
    var cnt=0;
    var cnti=0;
    var cntj=0;
    var cntk=0;
    var Ti=2000;
    var Tj=200;
    var Tk=200;
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

	function fun(Ci,x,y,r,loop,idx)
		{
			var ul = document.getElementById("points");
			if(loop==1)	{var anim = Raphael.animation({cx:x, cy:y,r:r}, Ti);}
			if(loop==2)	{var anim = Raphael.animation({cx:x, cy:y,r:r}, Tj);}
			if(loop==3)	{var anim = Raphael.animation({cx:x, cy:y,r:r}, Tk);}
			Ci.animate(anim.delay(cnt));
			if(loop==1)	
				{
					setTimeout(function()
						{
							for(var i=0;i<idx;i++)
								{
									ul.children[i].style.background='black';
								}
							ul.children[idx].style.background='blue';
						},cnti);
					cnti=cnti+Ti;
				}
			if(loop==2)	
				{
					setTimeout(function()
						{
								
							for(var j=0;j<idx;j++)
								{
									ul.children[j].style.background='black';
								}
							if(ul.children[idx].style.background!='blue')	{ul.children[idx].style.background='red';}

						},cntj);
					cntj=cntj+Tj;
					cnti=cnti+Ti;
				}
			if(loop==3)	
				{
					setTimeout(function()
						{
							
							for(var k=0;k<idx;k++)
								{
									ul.children[k].style.background='black';
								}
							if(ul.children[idx].style.background!='blue' && ul.children[idx].style.background!='red')	{ul.children[idx].style.background='pink';}
						},cntk);
					cntk=cntk+Tk;
					cntj=cntj+Tj;
					cnti=cnti+Ti;

				}
			if(loop==1)	cnt=cnt+Ti;
			if(loop==2)	cnt=cnt+Tj;
			if(loop==3)	cnt=cnt+Tk;
			
		}

	var n=Math.floor(document.getElementById('uname').value);


	var ansarray=new Array();
	var PX=new Array(); 
	var PY=new Array();
	for (var i=0;i<n;i++)
		{
			var x=Math.floor((Math.random()*1000)+1);
			var y=Math.floor((Math.random()*550)+1);
			PX[i]=x;
			PY[i]=y;	
		}

	for(var i=0;i<n;i++)
		{
			var ul = document.getElementById("points");
			var newLI = document.createElement("LI");
			ul.appendChild(newLI);
			var txt=document.createTextNode(i+1);
			newLI.appendChild(txt);
			txt=document.createTextNode('.  (');
			newLI.appendChild(txt);
			txt=document.createTextNode(PX[i]);
			newLI.appendChild(txt);
			txt=document.createTextNode(',  ');
			newLI.appendChild(txt);
			txt=document.createTextNode(PY[i]);
			newLI.appendChild(txt);
			txt=document.createTextNode(')');
			newLI.appendChild(txt);
		}
	
	var draw_points=new Array();
	var divarray=new Array();
	var ri=10;
	for (var i=0;i<n;i++)
		{
			draw_points[i] = paper.circle(PX[i],PY[i],2); 
			draw_points[i].attr({fill:'#000',stroke:"none"});
			divarray[i]=document.createElement('div');
			$("#canvas_container").append(divarray[i]);
			divarray[i].className += ' po';
			var pp=document.createElement("p");
			divarray[i].appendChild(pp);
			txt=document.createTextNode(PX[i]);
			pp.appendChild(txt);
			txt=document.createTextNode(',');
			pp.appendChild(txt);
			txt=document.createTextNode(PY[i]);
			pp.appendChild(txt);
			divarray[i].style.left=ri+PX[i]+"px";
			divarray[i].style.top=PY[i]+"px";
			divarray[i].style.display="none";
			draw_points[i].hover(
    			function() 
    			{
    			    this.g = this.glow({color: "#F90", width: 10});
    			},
			    function() 
			    {
        			this.g.remove();
    			});
		}
	var centerx=(PX[0]+PX[1])/2;
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
				}
	}  