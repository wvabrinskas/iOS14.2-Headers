/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/SCNShadable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNProgram, NSDictionary, SCNMaterialProperty, SCNOrderedDictionary, NSMutableDictionary, NSString, SCNShadableHelper, NSArray;

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding> {

	C3DMaterialRef _material;
	SCNMaterialProperty* _ambient;
	SCNMaterialProperty* _diffuse;
	SCNMaterialProperty* _specular;
	SCNMaterialProperty* _emission;
	SCNMaterialProperty* _reflective;
	SCNMaterialProperty* _transparent;
	SCNMaterialProperty* _multiply;
	SCNMaterialProperty* _normal;
	SCNMaterialProperty* _ambientOcclusion;
	SCNMaterialProperty* _selfIllumination;
	SCNMaterialProperty* _metalness;
	SCNMaterialProperty* _roughness;
	SCNMaterialProperty* _displacement;
	SCNMaterialProperty* _clearCoat;
	SCNMaterialProperty* _clearCoatRoughness;
	SCNMaterialProperty* _clearCoatNormal;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	NSString* _name;
	NSMutableDictionary* _valuesForUndefinedKeys;
	float _shininess;
	float _transparency;
	float _indexOfRefraction;
	float _fresnelExponent;
	float _selfIlluminationOcclusion;
	long long _transparencyMode;
	NSString* _lightingModelName;
	long long _cullMode;
	SCNShadableHelper* _shadableHelper;
	BOOL _isPresentationInstance;
	BOOL _litPerPixel;
	BOOL _doubleSided;
	BOOL _locksAmbientWithDiffuse;
	BOOL _avoidsOverLighting;
	BOOL _writesToDepthBuffer;
	BOOL _readsFromDepthBuffer;
	unsigned long long _fillMode;
	long long _blendMode;
	long long _colorBufferWriteMask;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) SCNMaterialProperty * diffuse; 
@property (nonatomic,readonly) SCNMaterialProperty * ambient; 
@property (nonatomic,readonly) SCNMaterialProperty * specular; 
@property (nonatomic,readonly) SCNMaterialProperty * emission; 
@property (nonatomic,readonly) SCNMaterialProperty * transparent; 
@property (nonatomic,readonly) SCNMaterialProperty * reflective; 
@property (nonatomic,readonly) SCNMaterialProperty * multiply; 
@property (nonatomic,readonly) SCNMaterialProperty * normal; 
@property (nonatomic,readonly) SCNMaterialProperty * displacement; 
@property (nonatomic,readonly) SCNMaterialProperty * ambientOcclusion; 
@property (nonatomic,readonly) SCNMaterialProperty * selfIllumination; 
@property (nonatomic,readonly) SCNMaterialProperty * metalness; 
@property (nonatomic,readonly) SCNMaterialProperty * roughness; 
@property (nonatomic,readonly) SCNMaterialProperty * clearCoat; 
@property (nonatomic,readonly) SCNMaterialProperty * clearCoatRoughness; 
@property (nonatomic,readonly) SCNMaterialProperty * clearCoatNormal; 
@property (assign,nonatomic) double shininess; 
@property (assign,nonatomic) double transparency; 
@property (nonatomic,copy) NSString * lightingModelName; 
@property (assign,getter=isLitPerPixel,nonatomic) BOOL litPerPixel; 
@property (assign,getter=isDoubleSided,nonatomic) BOOL doubleSided; 
@property (assign,nonatomic) unsigned long long fillMode; 
@property (assign,nonatomic) long long cullMode; 
@property (assign,nonatomic) long long transparencyMode; 
@property (assign,nonatomic) BOOL locksAmbientWithDiffuse; 
@property (assign,nonatomic) BOOL writesToDepthBuffer; 
@property (assign,nonatomic) long long colorBufferWriteMask; 
@property (assign,nonatomic) BOOL readsFromDepthBuffer; 
@property (assign,nonatomic) double fresnelExponent; 
@property (assign,nonatomic) long long blendMode; 
@property (readonly) NSArray * animationKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)material;
+(id)materialWithColor:(id)arg1 ;
+(id)materialWithMDLMaterial:(id)arg1 ;
+(id)materialWithMaterialRef:(C3DMaterialRef)arg1 ;
+(id)materialWithContents:(id)arg1 ;
+(id)materialNamed:(id)arg1 ;
-(unsigned long long)fillMode;
-(void)removeAllAnimations;
-(id)debugQuickLookObject;
-(void)setFillMode:(unsigned long long)arg1 ;
-(BOOL)isDoubleSided;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)init;
-(void)addAnimation:(id)arg1 ;
-(id)contents;
-(void)setCullMode:(long long)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setBlendMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identifier;
-(void)setColor:(id)arg1 ;
-(SCNProgram *)program;
-(void)setContent:(id)arg1 ;
-(NSString *)name;
-(id)properties;
-(NSString *)description;
-(SCNMaterialProperty *)multiply;
-(void)setContents:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(SCNMaterialProperty *)diffuse;
-(SCNMaterialProperty *)ambient;
-(NSDictionary *)shaderModifiers;
-(void)setIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)animationKeys;
-(id)color;
-(SCNMaterialProperty *)normal;
-(id)animationForKey:(id)arg1 ;
-(id)scene;
-(SCNMaterialProperty *)specular;
-(SCNMaterialProperty *)emission;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)blendMode;
-(void)setDoubleSided:(BOOL)arg1 ;
-(BOOL)doubleSided;
-(void)setProgram:(SCNProgram *)arg1 ;
-(id)content;
-(id)copy;
-(void)dealloc;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(double)transparency;
-(void)setTransparency:(double)arg1 ;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(void)setLightingModelName:(NSString *)arg1 ;
-(SCNMaterialProperty *)transparent;
-(SCNMaterialProperty *)reflective;
-(SCNMaterialProperty *)displacement;
-(SCNMaterialProperty *)ambientOcclusion;
-(SCNMaterialProperty *)selfIllumination;
-(SCNMaterialProperty *)metalness;
-(SCNMaterialProperty *)roughness;
-(id)animationPlayerForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)setWritesToDepthBuffer:(BOOL)arg1 ;
-(void)setReadsFromDepthBuffer:(BOOL)arg1 ;
-(id)customMaterialPropertyNames;
-(void)removeAllBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)setLocksAmbientWithDiffuse:(BOOL)arg1 ;
-(void)setShininess:(double)arg1 ;
-(double)shininess;
-(long long)cullMode;
-(id)_integrateModelKitComputedMaps:(id)arg1 withGeometry:(id)arg2 node:(id)arg3 texturePathProvider:(/*^block*/id)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed:(id)arg6 filePath:(id)arg7 ;
-(const void*)__CFObject;
-(void)setColorBufferWriteMask:(long long)arg1 ;
-(C3DSceneRef)sceneRef;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)unbindAnimatablePath:(id)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2 ;
-(id)initWithMaterialRef:(C3DMaterialRef)arg1 ;
-(C3DMaterialRef)materialRef;
-(id)initPresentationMaterialWithMaterialRef:(C3DMaterialRef)arg1 ;
-(id)presentationMaterial;
-(_C3DEffectCommonProfile*)commonProfile;
-(Class)_materialPropertyClass;
-(SCNMaterialProperty *)clearCoat;
-(SCNMaterialProperty *)clearCoatRoughness;
-(SCNMaterialProperty *)clearCoatNormal;
-(id)builtinProperties;
-(id)customMaterialProperties;
-(void)_setupMaterialProperty:(id*)arg1 ;
-(id)_property:(id*)arg1 ;
-(BOOL)isLitPerPixel;
-(void)_copyAttributes:(id)arg1 ;
-(long long)transparencyMode;
-(void)setTransparencyMode:(long long)arg1 ;
-(NSString *)lightingModelName;
-(void)setLitPerPixel:(BOOL)arg1 ;
-(BOOL)locksAmbientWithDiffuse;
-(BOOL)avoidsOverLighting;
-(void)setAvoidsOverLighting:(BOOL)arg1 ;
-(double)fresnelExponent;
-(void)setFresnelExponent:(double)arg1 ;
-(BOOL)writesToDepthBuffer;
-(BOOL)readsFromDepthBuffer;
-(long long)colorBufferWriteMask;
-(void)copyShaderModifiersFrom:(id)arg1 ;
-(void)_setupShadableHelperIfNeeded;
-(id)__shadableHelper;
-(id)shaderModifiersArgumentsNames;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)_customEncodingOfSCNMaterial:(id)arg1 ;
-(void)_customDecodingOfSCNMaterial:(id)arg1 ;
-(void)setIndexOfRefraction:(double)arg1 ;
-(void)setSelfIlluminationOcclusion:(double)arg1 ;
-(double)indexOfRefraction;
-(double)selfIlluminationOcclusion;
-(BOOL)litPerPixel;
-(C3DMaterialRef)materialRefCreateIfNeeded;
-(id)customMaterialAttributeNames;
-(id)customMaterialAttributes;
-(id)debugQuickLookData;
@end
