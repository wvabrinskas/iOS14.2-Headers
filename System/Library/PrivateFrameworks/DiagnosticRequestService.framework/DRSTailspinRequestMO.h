/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DRSRequestMO.h>

@class NSNumber;

@interface DRSTailspinRequestMO : DRSRequestMO

@property (assign,nonatomic) BOOL includeOsLog; 
@property (assign,nonatomic) BOOL includeOsSignpost; 
@property (nonatomic,copy) NSNumber * maxMAT; 
@property (nonatomic,copy) NSNumber * minMAT; 
@property (assign,nonatomic) BOOL scrubbed; 
+(id)fetchRequest;
@end
