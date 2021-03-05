#ifndef _RIVE_LAYER_STATE_BASE_HPP_
#define _RIVE_LAYER_STATE_BASE_HPP_
#include "animation/state_machine_layer_component.hpp"
namespace rive
{
	class LayerStateBase : public StateMachineLayerComponent
	{
	protected:
		typedef StateMachineLayerComponent Super;

	public:
		static const int typeKey = 60;

		/// Helper to quickly determine if a core object extends another without
		/// RTTI at runtime.
		bool isTypeOf(int typeKey) const override
		{
			switch (typeKey)
			{
				case LayerStateBase::typeKey:
				case StateMachineLayerComponentBase::typeKey:
					return true;
				default:
					return false;
			}
		}

		int coreType() const override { return typeKey; }

	protected:
	};
} // namespace rive

#endif