/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNMultiValueUpdate.h>

@class CNLabeledValue;

@interface CNMultiValueSingleUpdate : CNMultiValueUpdate {

	CNLabeledValue* _value;

}

@property (nonatomic,readonly) CNLabeledValue * value;              //@synthesize value=_value - In the implementation block
-(id)initWithValue:(id)arg1 ;
-(id)description;
-(CNLabeledValue *)value;
@end
