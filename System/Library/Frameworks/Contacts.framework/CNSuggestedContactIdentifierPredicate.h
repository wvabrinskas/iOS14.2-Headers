/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString;

@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate> {

	unsigned long long _suggestionIdentifier;

}

@property (readonly) unsigned long long suggestionIdentifier;              //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsNativeSorting;
-(void)encodeWithCoder:(id)arg1 ;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(id)initWithSuggestionIdentifier:(unsigned long long)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)suggestionIdentifier;
@end
