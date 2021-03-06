/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNContactUpdate.h>

@class CNMultiValuePropertyDescription, CNMultiValueDiff;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate {

	CNMultiValuePropertyDescription* _property;
	CNMultiValueDiff* _diff;

}

@property (readonly) CNMultiValuePropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) CNMultiValueDiff * diff;                                 //@synthesize diff=_diff - In the implementation block
-(CNMultiValuePropertyDescription *)property;
-(CNMultiValueDiff *)diff;
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id*)arg4 ;
-(id)initWithProperty:(id)arg1 diff:(id)arg2 ;
-(id)description;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
@end

