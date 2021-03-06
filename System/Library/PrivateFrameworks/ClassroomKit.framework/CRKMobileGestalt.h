/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKMobileGestalt : NSObject

@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) double mainScreenScale; 
@property (nonatomic,readonly) CGSize mainScreenSizeInPixels; 
@property (nonatomic,readonly) unsigned long long availableBytes; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
+(id)sharedGestalt;
-(NSString *)serialNumber;
-(NSString *)buildVersion;
-(NSString *)productVersion;
-(double)mainScreenScale;
-(unsigned long long)availableBytes;
-(id)answerForQuestion:(CFStringRef)arg1 ofClass:(Class)arg2 ;
-(id)answerForQuestion:(CFStringRef)arg1 ;
-(CGSize)mainScreenSizeInPixels;
@end

