/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNSuggested.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, NSString, CNLabelValuePair, NSDictionary, NSSet;

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding> {

	CNLabelValuePair* _labelValuePair;
	NSString* _identifier;
	int _iOSLegacyIdentifier;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	NSSet* _linkedIdentifiers;
	BOOL _isValueMutable;

}

@property (nonatomic,readonly) NSString * localizedLabel; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,readonly) NSString * suggestionFoundInBundleId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CNLabelValuePair * labelValuePair;                               //@synthesize labelValuePair=_labelValuePair - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * linkedIdentifiers;                                 //@synthesize linkedIdentifiers=_linkedIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * storeInfo;                                  //@synthesize storeInfo=_storeInfo - In the implementation block
@property (assign,nonatomic) int iOSLegacyIdentifier;                                 //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> value; 
+(id)allLabels;
+(id)allLabels;
+(void*)addressBook;
+(void*)addressBook;
+(id)defaultLabels;
+(id)defaultLabels;
+(id)allCustomLabels;
+(id)allCustomLabels;
+(id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2 ;
+(id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2 ;
+(void)deleteCustomLabel:(id)arg1 ;
+(void)deleteCustomLabel:(id)arg1 ;
+(id)builtinLabelsForProperty:(id)arg1 ;
+(id)builtinLabelsForProperty:(id)arg1 ;
+(/*^block*/id)Value;
+(/*^block*/id)testMatchingIdentifier:(id)arg1 ;
+(id)entryForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)emptyEntries;
+(id)labelForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)valueForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(BOOL)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2 ;
+(id)allValuesInArray:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2 ;
+(id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2 ;
+(id)localizedStringForLabel:(id)arg1 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(NSString *)localizedLabel;
-(NSString *)localizedLabel;
-(Class)contactViewControllerCellClassForPropertyType:(id)arg1 ;
-(NSString *)label;
-(NSString *)storeIdentifier;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)init;
-(NSDictionary *)storeInfo;
-(unsigned long long)hash;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(id)primitiveInitWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(NSSet *)linkedIdentifiers;
-(void)setLinkedIdentifiers:(NSSet *)arg1 ;
-(CNLabelValuePair *)labelValuePair;
-(void)addStoreInfo:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isSuggested;
-(int)iOSLegacyIdentifier;
-(id)valueOrigin;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(id<NSCopying><NSSecureCoding>)value;
-(id)initWithCoder:(id)arg1 ;
-(SGRecordId *)suggestionRecordId;
-(NSString *)suggestionFoundInBundleId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg1 ;
@end
