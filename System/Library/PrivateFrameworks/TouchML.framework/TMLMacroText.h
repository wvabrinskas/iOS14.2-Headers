/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TMLMacroText : NSObject {

	NSString* macroText;
	NSString* basePath;
	NSString* filename;

}

@property (nonatomic,retain) NSString * macroText; 
@property (nonatomic,retain) NSString * basePath; 
@property (nonatomic,retain) NSString * filename; 
+(id)macroTextWithMacroText:(id)arg1 basePath:(id)arg2 filename:(id)arg3 ;
-(NSString *)filename;
-(NSString *)basePath;
-(void)setFilename:(NSString *)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(void)setMacroText:(NSString *)arg1 ;
-(NSString *)macroText;
@end

