/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, PKPaymentSetupProduct;

@interface PKPickerItem : NSObject {

	NSString* _title;
	PKPaymentSetupProduct* _product;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) id selectionHandler;                            //@synthesize selectionHandler=_selectionHandler - In the implementation block
+(id)itemWithTitle:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
+(id)itemWithProduct:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(PKPaymentSetupProduct *)product;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(id)selectionHandler;
-(void)handleSelectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
@end

