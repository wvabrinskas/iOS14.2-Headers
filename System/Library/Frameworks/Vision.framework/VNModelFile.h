/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol VNModelFile <NSObject>
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain) NSString * resourcePath; 
@property (nonatomic,readonly) _sFILE* ptrFile; 
@optional
-(_sFILE*)ptrFile;
-(void)setResourcePath:(id)arg1;
-(NSString *)resourcePath;

@required
-(const void*)baseAddress;
-(void)advise:(long long)arg1;
-(unsigned long long)length;

@end

