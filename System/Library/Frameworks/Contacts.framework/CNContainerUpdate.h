/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContainerUpdate.h>

@protocol CNContainerUpdate <NSObject>
@required
-(id)property;
-(id)value;
-(void)applyToMutableContainer:(id)arg1;

@end


@class CNContainerPropertyDescription, NSString;

@interface CNContainerUpdate : NSObject <CNContainerUpdate> {

	CNContainerPropertyDescription* _property;
	id _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateWithValue:(id)arg1 property:(id)arg2 ;
-(id)property;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(NSString *)description;
-(id)value;
-(void)applyToMutableContainer:(id)arg1 ;
@end

