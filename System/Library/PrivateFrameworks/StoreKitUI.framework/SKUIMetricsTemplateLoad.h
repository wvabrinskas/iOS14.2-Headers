/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SKUIMetricsTemplateLoad : NSObject <NSCopying> {

	BOOL _responseWasCached;
	double _requestStartTime;
	double _responseStartTime;
	double _responseEndTime;

}

@property (assign,nonatomic) double requestStartTime;                                //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                               //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                                 //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) BOOL responseWasCached;                                 //@synthesize responseWasCached=_responseWasCached - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(double)responseEndTime;
-(NSDictionary *)dictionaryRepresentation;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(double)responseStartTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)responseWasCached;
-(void)setResponseWasCached:(BOOL)arg1 ;
@end

