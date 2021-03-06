/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCVASTransactionExceptionEvent, NSString;

@interface NFAWDVASTransactionException : NSObject <NFAWDEventProtocol> {

	unsigned _type;
	unsigned _swStatus;
	AWDNFCVASTransactionExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned swStatus;                                        //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,retain) AWDNFCVASTransactionExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)getMetric;
-(void)setMetric:(AWDNFCVASTransactionExceptionEvent *)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(AWDNFCVASTransactionExceptionEvent *)metric;
-(unsigned)type;
-(unsigned)getMetricId;
-(void)setSwStatus:(unsigned)arg1 ;
-(unsigned)swStatus;
-(void)updateExceptionUUID:(id)arg1 ;
@end

