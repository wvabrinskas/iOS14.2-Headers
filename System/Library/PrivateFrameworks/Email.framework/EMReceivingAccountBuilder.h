/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class EMDeliveryAccount, NSArray, NSString;


@protocol EMReceivingAccountBuilder <EMAccountBuilder>
@property (nonatomic,retain) EMDeliveryAccount * deliveryAccount; 
@property (nonatomic,retain) NSArray * emailAddresses; 
@property (assign,nonatomic) BOOL sourceIsManaged; 
@property (assign,nonatomic) BOOL shouldArchiveByDefault; 
@property (nonatomic,copy) NSString * statisticsKind; 
@required
-(void)setEmailAddresses:(id)arg1;
-(BOOL)sourceIsManaged;
-(void)setStatisticsKind:(id)arg1;
-(NSString *)statisticsKind;
-(EMDeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(id)arg1;
-(void)setSourceIsManaged:(BOOL)arg1;
-(void)setShouldArchiveByDefault:(BOOL)arg1;
-(NSArray *)emailAddresses;
-(BOOL)shouldArchiveByDefault;

@end

