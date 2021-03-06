/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray;

@interface PhotosControlCommand : NSObject {

	NSArray* _args;
	unsigned char _options;

}

@property (readonly) BOOL isVerbose; 
+(id)usage;
+(long long)maximumArgs;
+(long long)minimumArgs;
+(id)abbreviations;
+(id)name;
+(option*)longopts;
+(const char*)optstring;
+(id)usagesummary;
-(id)args;
-(id)init;
-(BOOL)isVerbose;
-(void)willProcessOptions;
-(BOOL)processArgc:(int)arg1 argv:(char**)arg2 ;
-(void)output:(id)arg1 arguments:(char*)arg2 ;
-(void)outputError:(id)arg1 arguments:(char*)arg2 ;
-(id)dataForPathOrStdin:(id)arg1 ;
-(BOOL)writeData:(id)arg1 toPathOrStdout:(id)arg2 ;
-(void)waitForSigInt;
-(void)output:(id)arg1 ;
-(id)description;
-(BOOL)processOption:(int)arg1 arg:(id)arg2 ;
-(void)outputError:(id)arg1 ;
-(id)initWithArgc:(int)arg1 argv:(char**)arg2 options:(unsigned char)arg3 ;
@end

