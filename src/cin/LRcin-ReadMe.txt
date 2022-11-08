
Date:  03:28:05 PM  Friday December 28,2018 

 LRcin.exe cinema video maker:

   This is a small program that takes a set of 'pcx' pictures and a 'wav' audio file 
  to make a 'cin' video file. These video files were made for Quake 2. Quake 2 plays
  them between levels and at the intro, and of couse at the end.

  Thanks to the guys at Id Software, Inc. for releasing the code that this was based on.


   The 'pcx' pictures have to have palettes perferable all the same palette.
   Their size should be 320 by 200. Sizes larger than this produces multipul images in the cin.
  They should be numbered as a profix that is like Picture0000.pcx. And have sequncial
  numbers like:Picture0000.pcx,Picture0001.pcx,Picture0003.pcx...
   LRcin will stop making the video the moment it finds a break in these numbers.
   
  There are limits that I've place on the pcx animation. 
   The smallest number of frames is 10. The cin plays at 14 frames a second. 
   So numbers lower than 14 would be less than a sceond, not much of an intermission.
   The largest number is 9999. That will give you a video nearly 12 minutes long!
    
  You don't need a WAV to make a video, but if you want sound there are some limits. 

  The WAV can be 8 or 16 bit and stereo or mono. It should have a rate of 11025hz or 12050hz.
 The WAV can have any lenght your computer can handle. The WAV is loaded full lenght into memory!
  The wav is cut off at the end of the cin video. 
  So the closest the wav lenght to video lenght the better.

              
  Now to the program: LRcin.exe
  
  First LRcin doesn't use the window registry it has it own ini file that keeps track of
  the file locations you use. When you first start up LRcin will make the ini file in the 
  directory the program is in. There are four files that the ini keeps track of: 
     The full name of the last loaded pcx file     
     The full name of the last loaded wav file       
     The full name of the last Saved  cin file       
     The full name of the last Saved  prj file (this is a project file, more latter)

  LRcin doesn't display PCXs or play WAVs, or plays cins;  it is small and it is fast!  
  
  
  The display is a simple as I could make it. There are four buttons. They are labeled.
  They have color boxes beside them. If you choose a buttom a display dialog usally 
  comes up with infomation and  another button. That button let you load a pcx or wav or make a cin. 
  You NEED at lease to have the pcx and the cin name to make a video. The color box beside a 
  button tells you at a glance if you have what you need loaded. 
  Green means you got it!  Red means you need it! 

  The 'CIN File' button is the exception to the way the others work. It will take you to
  a save file dialog. If you select an exsisting file you'll be ask 'do you want to overwite'
  Don't be scared if you accidently say yes when you mean no. Nothing is wrote to until you
  press the 'Make cin Video' button from the 'Make Video' button.
  

  The 'Make Video' button will not turn Green unless you can make a video.
   When selected (even when not Green) a display will show you what you've got so far.
   The button 'Make cin Video' at the top will only be active when you can make a video!
   When ready press this button then LRcin makes the video. This may take awhile.
   So the status bar says it is making a video. When done a message appears. If there are
   any errors they will appear here.(sometimes a bad pcx sneaks in) Other Wise you'll get
   the Made: filename message.
   
  One more thing about the display buttons, only about the PCX,WAV,CIN files.
  If you CANCLE out from the file select then color box turns OFF. Even if you had choosen
  a file before and came back to look at the folder. Why you may ask. Well I won't tell ya.
  Well, it's tectanal the short answer the values for the box colors are hard to not change
  when you exscaping from file select.
  
  Now the project menu:
  
  I have New,open,save,exit choises.
  
    New - will set all box to red but And will not effect the file seclect for any button
    
    open - will load a project : it'll set all buttons and  file seclect for a11 buttons
    
    save - will save a project : it'll save all buttons and  file seclect for a11 buttons
           when asked here 'do you want to overwrite' yes means IT WILL OVERWRITE!!
           
    exit - shut down :: all files selected will be saved in the ini
    
  
  After thoughts:
   Here are some of my thoughts about LRcin and making cin videos.
   
   First cin videos are very old tec.(1997) But Quake 2 uses them and I wanted to use the 
   Quake 2 engine unchanged to make my dream game. 
    I use POV-ray (the greatest free raytracer ever made) to make the pcxs needed for the 
   animation. A well as all the graphics for Q2. I even wrote LRcin with the POV editor!
   
   I used  QuArK to make the level maps and test the cin videos.
   QuArK-(Quake Army Knife) is a multi-purpose tool for the games using engines similar 
   to or based on the Quake engine by id Software. It is also free!!
   
   I ceated LRcin because I needed a way to finish my dream game. I didn't want it to just stop.
   A nice video would do the trick. And an introduction would be good. Also between some of the
   levels could use something. So now its done! Time to make some videos!!
   
     
        
                                       